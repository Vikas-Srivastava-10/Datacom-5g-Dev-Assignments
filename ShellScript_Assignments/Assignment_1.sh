file="myfile.txt"
if [ -f "$file" ]
then 
	echo "File exists"
else
	echo "File not found"
fi

