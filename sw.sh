KO="KO";

# while true
# do
# # ARG=`ruby -e "puts ($1..$2).to_a.shuffle.join(' ')"` ; echo $ARG ; ./push_swap $ARG | ./checker_Mac $ARG
# ARG=`ruby -e "puts (1..$1).to_a.shuffle.join(' ')"` ; ./push_swap $ARG | ./checker_Mac $ARG
# ./push_swap $ARG | ./checker $ARG
# is_ok=$(./push_swap $ARG | ./checker $ARG | grep -E "OK\b|KO\b");
# echo $ARG >> ARGS
# sleep 0.5
# done



# while true
# do
# ARG=`ruby -e "puts ($1..$2).to_a.shuffle.join(' ')"` ; echo $ARG ; ./push_swap $ARG | ./checker_Mac $ARG
ARG=" "
# `ruby -e "puts (1..$1).to_a.shuffle.join(' ')"` 
# ; ./push_swap $ARG | ./checker_Mac $ARG
# ./push_swap $ARG | ./checker $ARG
is_ok=$(./push_swap $ARG | ./checker_Mac $ARG | grep -E "OK\b|KO\b");
echo $is_ok
if [[ $is_ok == *"OK"* ]]
then
	echo "ITS TRUE";
fi
if [[ $is_ok == *"KO"* ]]
then
	echo "ITS FALSE";
fi
if [[ $is_ok == *"Error"* ]]
then
	echo "ERROR EL7AJ";
fi
# echo $ARG >> ARGS
# sleep 0.5
# done