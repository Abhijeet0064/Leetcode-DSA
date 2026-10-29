select score,Dense_Rank() over (order by score DESC) as 'rank'
from scores
order by score desc;
