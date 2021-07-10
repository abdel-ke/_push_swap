while true
do
# ARG=`ruby -e "puts ($1..$2).to_a.shuffle.join(' ')"` ; echo $ARG ; ./push_swap $ARG | ./checker_Mac $ARG
ARG=`ruby -e "puts (0..$1).to_a.shuffle.join(' ')"` ; ./push_swap $ARG | ./checker_Mac $ARG
sleep 0.5
done