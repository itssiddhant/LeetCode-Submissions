# Write your MySQL query statement below
SELECT * FROM CINEMA where (id%2)<>0 group by description having description <>"boring" order by rating desc;