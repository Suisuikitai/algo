#!/bin/sh

read name
filename="$name.cpp"
echo '#include <bits/stdc++.h>' >> $filename
echo 'using namespace std;' >> $filename
echo '' >> $filename
echo 'int main(int argc, char const *argv[])' >> $filename
echo '{' >> $filename
echo '	' >> $filename
echo '	return 0;' >> $filename
echo '}' >> $filename