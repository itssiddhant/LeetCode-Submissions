# Write your MySQL query statement below
select d.name as Department, e.name as Employee, e.salary as Salary
from employee e
join department d
on e.departmentId = d.id
where 3 >(select count(distinct (e1.salary)) 
    from employee e1
    where e1.salary>e.salary
    and e.departmentId = e1.departmentId
);