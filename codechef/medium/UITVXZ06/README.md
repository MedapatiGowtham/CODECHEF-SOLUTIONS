# UITVXZ06

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Create and read operations practice

In this practice, you will apply what you've learned by performing  **Create**  and  **Read**  operations using the  **Student model**  you've already defined earlier.

We will use the existing schema to:

- Insert new student documents into the MongoDB Atlas database.
- Retrieve all students using a.find() query.
- (Optional) Retrieve a specific student by their _id using.findById().
### Reminder: Student Schema

This is the same schema you created earlier:

```
const studentSchema = new mongoose.Schema({
  fullName: String,
  studentId: String,
  major: String,
  enrollmentDate: Date
});

```

You’ve also created a model using:

```
const Student = mongoose.model('Student', studentSchema);

```

This student schema is stored in `/models/student.js` and we are importing it in this `index.js` file.

### Your Task

You don’t need to redefine the schema or model — it's already in place. Your job now is to: Just add your MongoDB URI.

### Expected Outcome

When you run your script:

- A new student will be inserted into your database.
- All students will be printed to the console.
- (Optional) A specific student will be fetched using their _id.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-07T04:43:20.782Z  

```cpp
                        runPractice();
                        }).catch(err => {
                          console.error('❌ MongoDB Atlas connection error:', err);
                          });

                          // Step 4: Create Operation
                          async function createStudent() {
                            try {
                                const newStudent = new Student({
                                    fullName: 'George Hotz',
                                        studentId: '01',
                                            major: 'Computer Science',
                                                enrollmentDate: new Date('2021-08-01')
                                                    });
                                                        const savedStudent = await newStudent.save();
                                                            console.log('📝 Student Created:', savedStudent);
                                                                } catch (error) {
                                                                    console.error('❌ Error creating student:', error);
                                                                        }
                                                                        }

                                                                        // Step 5: Read All Students
                                                                        async function readAllStudents() {
                                                                          try {
                                                                                const students = await Student.find({});
                                                                                          console.log('📚 All Students:', students);
                                                                                                      } catch (error) {
                                                                                                                      console.error('❌ Error reading students:', error);
                                                                                                                                        }
                                                                                                                                                          }

                                                                                                                                                          // Step 6: Read Student by ID (Optional)
                                                                                                                                                          async function readStudentById(id) {
                                                                                                                                                            try {
                                                                                                                                                                  const student = await Student.findById(id);
                                                                                                                                                                            if (student) {
                                                                                                                                                                                            console.log('🔍 Student Found by ID:', student);
                                                                                                                                                                                                                } else {
                                                                                                                                                                                                                                            console.log('⚠️ No student found with that ID');
                                                                                                                                                                                                                                                                             }
                                                                                                                                                                                                                                                                                                             } catch (error) {
                                                                                                                                                                                                                                                                                                                                                  console.error('❌ Error finding student by ID:', error);
                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                              }
```

---

[View on CodeChef](https://www.codechef.com/problems/UITVXZ06)