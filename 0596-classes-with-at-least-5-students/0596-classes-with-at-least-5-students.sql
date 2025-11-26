# Write your MySQL query statement below
SELECT class from Courses 
Group by class 
having count(student)>=5