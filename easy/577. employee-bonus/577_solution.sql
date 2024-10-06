# Write your MySQL query statement below
select e.name, b.bonus from employee e LEFT JOIN bonus b
ON e.empId = b.empId 
where bonus<1000 or bonus is null;