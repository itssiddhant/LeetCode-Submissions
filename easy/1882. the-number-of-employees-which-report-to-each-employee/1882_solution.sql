# Write your MySQL query statement below
select e.employee_id,e.name, count(e.employee_id) as reports_count, round(avg(f.age)) as average_age from employees e 
join employees f
on e.employee_id=f.reports_to
group by e.employee_id,e.name
order by e.employee_id;
