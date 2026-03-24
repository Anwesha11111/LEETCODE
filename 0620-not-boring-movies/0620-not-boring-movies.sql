# Write your MySQL query statement below
SELECT * FROM Cinema
WHERE description <> 'boring' AND id%2=1
order by rating DESC