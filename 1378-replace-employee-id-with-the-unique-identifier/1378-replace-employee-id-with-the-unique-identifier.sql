# Write your MySQL query statement below
SELECT e.unique_id , es.name FROM Employees as es  
LEFT JOIN  EmployeeUNI AS e 
ON es.id = e.id;
