CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
SET N=N-1;
RETURN (
    SELECT DISTINCT salary from Employee order by salary desc limit 1 OFFSET N
);
END