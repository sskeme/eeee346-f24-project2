rm -rf main
g++ -o main *.cpp *.h

rm -rf result.txt
cat input/testAdd.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/solAdd.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "ADD - FAIL"
  else
    echo "ADD - PASS"
  fi 
else
  echo "ADD - FAIL (MISSING FILE)"
fi

rm -rf result.txt
cat input/testSub.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/solSub.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "SUB - FAIL"
  else
    echo "SUB - PASS"
  fi 
else
  echo "SUB - FAIL (MISSING FILE)"
fi

rm -rf result.txt
cat input/testAddInPlace.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/solAddInPlace.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "ADDINPLACE - FAIL"
  else
    echo "ADDINPLACE - PASS"
  fi 
else
  echo "ADDINPLACE - FAIL (MISSING FILE)"
fi

rm -rf result.txt
cat input/testSubInPlace.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/solSubInPlace.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "SUBINPLACE - FAIL"
  else
    echo "SUBINPLACE - PASS"
  fi 
else
  echo "SUBINPLACE - FAIL (MISSING FILE)"
fi

rm -rf result.txt
cat input/testMul.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/solMul.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "MUL - FAIL"
  else
    echo "MUL - PASS"
  fi 
else
  echo "MUL - FAIL (MISSING FILE)"
fi
