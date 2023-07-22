# Write your MySQL query statement below

Select firstName,lastName,city,state from Person left Join Address  on Person.personID=Address.personId;