# Write your MySQL query statement below
SELECT e.name,b.bonus FROM Employee as e
left Join Bonus as b on e.empId=b.empId
where b.bonus is null or b.bonus <1000;