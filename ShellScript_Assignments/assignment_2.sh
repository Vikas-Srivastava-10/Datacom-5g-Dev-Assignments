
while true; do
    
    read -p "Enter a number (or 0 to stop): " num

    if [ "$num" -eq 0 ]; then
        echo "Exiting the program."
        break
    fi
        
        if [ $((num % 2)) -eq 0 ]; then
            echo "$num is even."
        else
            echo "$num is odd."
        fi
    
done

