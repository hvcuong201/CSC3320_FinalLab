#!/bin/bash

echo -n "Enter phone number [(999)999-9999]: "
read num

echo -n "You entered "
output=$(echo "$num" | sed "s/(//g"| sed "s/)/-/g"); echo "$output"
