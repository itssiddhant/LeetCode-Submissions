select a.person_name
from queue a join queue b
on a.turn>=b.turn
group by a.turn
having sum(b.weight)<=1000
order by sum(b.weight) desc
limit 1;
