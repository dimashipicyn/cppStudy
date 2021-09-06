#/bin/sh

mkdir day0$1
cd day0$1
for ((i = 0; i < $2; i++)); do
  mkdir ex0$i
  cp ../Makefile ex0$i
  cp ../main.cpp ex0$i
done
