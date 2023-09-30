#!/bin/bash
# This script is used to run the test cases.

function run_test {
  filename=$1
  s1=$2
  s2=$3
  ./replace $filename "$s1" "$s2"
  diff "$filename".replace "$filename".expected > "$filename".diff
  if [ -s "$filename".diff ]
  then
    echo "KO"
  else
    echo "OK"
    rm -f "$filename".replace "$1".diff
  fi
}

make re

echo "\nTesting invalid arguments:"
./replace
./replace test
./replace test test
./replace test test test test
echo ""

echo "Testing non-existent file:"
./replace not_a_file test test
echo ""

echo "Testing empty file:"
run_diff tests/empty_file.txt samplestring newstring
echo ""

echo "Testing sample1.txt:"
run_test tests/sample1.txt i Z

echo "Testing sample2.txt:"
run_test tests/sample2.txt i TEST

echo "Testing sample3.txt:"
run_test tests/sample3.txt " " TEST

echo "Testing sample4.txt:"
run_test tests/sample4.txt qua A

echo "Testing sample5.txt:"
run_test tests/sample5.txt nonexistent_substring A

echo "Testing sample6.txt:"
run_test tests/sample6.txt " " ""

make fclean
