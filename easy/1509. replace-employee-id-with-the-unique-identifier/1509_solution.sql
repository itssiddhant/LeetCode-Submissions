# Write your MySQL query statement below
select uni.unique_id,e.name from Employees e LEFT OUTER JOIN EmployeeUNI uni ON e.id = uni.id;