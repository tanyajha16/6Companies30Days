class Solution:
    def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:
        in_degree = [0] * numCourses
        adj_list = [[] for x in range(numCourses)]
        queue = []
        final = []
        counter = 0
        
        for course, prereq in prerequisites:
            in_degree[course] += 1
            adj_list[prereq].append(course)
            
        for i in range(numCourses):
            if in_degree[i] == 0:
                queue.append(i)

        while(queue != []):
            node = queue.pop(0)
            final.append(node)
            counter += 1
            for dependent in adj_list[node]:
                in_degree[dependent] += -1
                if in_degree[dependent] == 0:
                    queue.append(dependent)
        if counter != numCourses:
            return []
        
        return final