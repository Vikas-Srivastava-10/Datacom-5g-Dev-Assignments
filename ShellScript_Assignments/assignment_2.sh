while true
do
        echo " enter a number and zero to stop the loop"
        read num
        if [ $num -eq 0 ]
        then
                echo "Program Stopped"
                break

        elif [ $((num%2)) -eq 0 ]
        then
                echo "number is even"
        else
                echo "number is odd"
        fi
done
