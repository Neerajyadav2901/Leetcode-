/* Write your T-SQL query statement below */
select email AS Email
From person   
group by email
having count (email) > 1