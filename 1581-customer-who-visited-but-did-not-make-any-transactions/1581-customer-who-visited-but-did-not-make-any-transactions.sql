# Write your MySQL query statement below
SELECT v.customer_id ,COUNT(v.visit_id) as count_no_trans 
FROM Visits as v
left join Transactions as t on v.visit_id=t.visit_id
WHere t.transaction_id IS NULL
Group by v.customer_id;