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