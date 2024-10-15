# Write your MySQL query statement below
select round(avg(customer_pref_delivery_date = order_date)*100,2) as immediate_percentage from delivery
where (customer_id,order_date) in 
(select customer_id, min(order_date)
from delivery group by customer_id
);
