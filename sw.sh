while true
do
ARG=`ruby -e "puts (-1000..10000).to_a.shuffle.sample($1).join(' ')"`
# echo $ARG

is_ok2=$(./push_swap $ARG | ./checker $ARG);
echo ___________ $is_ok2 ____________

# ARG="1 5 2 4 3"
is_ok=$(./push_swap $ARG | ./checker $ARG && ./push_swap $ARG | ./checker_Mac $ARG && ./push_swap $ARG | wc -l);
echo $is_ok
if [[ $is_ok2 == *"KO"* ]]
then
	echo $ARG >> ARGS
	echo >> ARGS
	exit;
fi
if [[ $is_ok2 == *"Error"* ]]
then
	echo $ARG >> ARGS
	echo >> ARGS
	exit;
fi
sleep 0.25
done