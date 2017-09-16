$nb_lines = ifconfig | grep "inet " | sed "s/.*inet //g" | cut -d' ' -f1 | wc -l

if [ $nb_lines > "0" ]
then
	ifconfig | grep "inet " | sed "s/.*inet //g" | cut -d' ' -f1
else
	echo "Je suis perdu !"
fi
