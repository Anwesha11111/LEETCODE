from typing import List

class Solution:
    def maxAverageRatio(self, classes: List[List[int]], extraStudents: int) -> float:
        
        n = len(classes)
        sratio = 0.0
        
        # Step 1: calculate initial average
        for i in range(n):
            passed = classes[i][0]
            total = classes[i][1]
            sratio += passed / total
        
        avg = sratio / n
        
        # Step 2: add extra students (naively)
        for _ in range(extraStudents):
            max_gain = 0
            best_class = 0
            
            for i in range(n):
                p, t = classes[i]
                gain = (p + 1) / (t + 1) - p / t
                
                if gain > max_gain:
                    max_gain = gain
                    best_class = i
            
            # assign one extra student
            classes[best_class][0] += 1
            classes[best_class][1] += 1
        
        # Step 3: compute final average
        final_avg = 0.0
        for p, t in classes:
            final_avg += p / t
        
        return final_avg / n
   