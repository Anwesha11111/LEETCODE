# Write your MySQL query statement below
DELETE id,email
FROM Person 
GROUP BY email
WHERE COUNT(*)>1