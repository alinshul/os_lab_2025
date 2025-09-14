#!/bin/sh

echo "Hello, average!"

count=0
sum=0

for arg in "$@"; do
    sum=$(awk "BEGIN {print $sum + $arg}") # awk для поддержки дробных чисел
    count=$((count + 1))
    
done

#  среднее арифметическое
average=$(awk "BEGIN {print $sum / $count}")

echo "Количество чисел: $count"
echo "Среднее арифметическое: $average"

