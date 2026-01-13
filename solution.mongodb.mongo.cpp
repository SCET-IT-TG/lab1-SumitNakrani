
// exercise : 1
db.students.insertOne({
  name: "Sumit Nakrani",
  department: "IT",
  semester: 6
})
db.students.insertOne({
  name: "Anjali Mehta",
  department: "CE",
  semester: 6
})

// exercise : 2
db.students.insertOne({
  name: "Kunal Verma",
  department: "ME",
  semester: 6,
  mobile: "9876543210"
})

// exercise : 3
db.subjects.insertOne({
  course_name: "B.Tech IT",
  subject_list: ["DBMS", "Java", "Python", "Web Technology"]
})

// exercise : 4
db.faculty.insertOne({
  department: "Computer Engineering",
  teachers: [
    { name: "Dr. R. Joshi", experience: 20 },
    { name: "Prof. S. Patel", experience: 12 }
  ]
})

// exercise : 5
db.students.insertOne({
  _id: ObjectId(),
  name: "Neha Patel",
  department: "IT",
  semester: 7
})

// exercise : 6
db.students.insertOne({
  _id: ObjectId("65a123456789abcdef000001"),
  name: "Amit"
})

// exercise : 7
db.courses.insert({
  course_name: "BCA",
  duration: "3 Years"
})
db.courses.insert({
  course_name: "MCA",
  duration: "2 Years"
})
db.courses.insert({
  course_name: "MBA",
  duration: "2 Years"
})

