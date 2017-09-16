ifconfig | grep "inet " | sed "s/.*inet //g" | cut -d' ' -f1
