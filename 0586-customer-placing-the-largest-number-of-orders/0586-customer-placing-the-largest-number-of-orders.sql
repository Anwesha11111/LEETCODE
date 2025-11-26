SELECT customer_number
FROM Orders
WHERE order_number=(SELECT MAX(order_number) FROM Orders);
