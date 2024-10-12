FILE="$1.cpp"
if [[ -f $FILE ]]; then
  g++ $FILE && ./a.out
  rm ./a.out
else
  echo "$FILE does not exist"
fi