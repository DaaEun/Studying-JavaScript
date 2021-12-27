-- Q6 (30점)
-- 지점(s_offices.city) 별로, 그리고 각 지점 내에서는 직원 별로 담당 고객수(소계)를 검색하세요.
-- 또한 지점별 고객수(중계), 그리고 전체 고객수(합계)도 함께 검색하세요.
-- 출력 컬럼은 지점, 성명, 고객수 순으로 합니다.
-- 담당 지점과 직원이 없는 고객의 경우, 지점명과 직원명에는 각각 '미정'이라고 나타냅니다.
-- 성명은 firstName과 lastName으로 구성하며, 사이에 공백 문자(space)가 하나 들어갑니다.
-- 지점별 고객수(중계)를 출력할 때, 성명에는 '모든 직원'이라 출력합니다.
-- 전체 고객수(합계)를 출력할 때, 지점에는 '모든 지점', 성명에는 '모든 직원'이라 출력합니다.

WITH temp AS
(
		SELECT	COALESCE(O.city, '미정') AS 지점,
				COALESCE(CONCAT(firstName, ' ', lastName), '미정') AS 성명, 
				customerId
		FROM	s_offices O JOIN s_employees USING (officeCode)
				RIGHT JOIN s_customers ON employeeId = salesRepId
)
SELECT	CASE	GROUPING(지점)
			WHEN 1 THEN '모든 지점' 
			ELSE 지점
		END AS 지점,
		CASE	GROUPING(성명)
			WHEN 1 THEN '모든 직원'
			ELSE 성명
		END AS 성명,
		COUNT(customerId) AS 고객수
FROM 	temp
GROUP 	BY 지점, 성명 WITH ROLLUP;