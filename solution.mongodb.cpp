// Exercise : 1
db.students.insertOne({
  name: "sumit",
  department: "CS",
  semester: 3,
})

db.students.insertOne({
  name: "raj",
  department: "IT",
  semester: 5,
})

// Exercise : 2
db.students.insertOne({
  name: "Charlie",
  department: "ECE",
  semester: 2,
  mobile: "9988776655"
})

// Exercise : 3
db.subjects.insertOne({
  course_name: "BSc Computer Science",
  subject_list: ["DBMS", "OS", "CN", "AI"]
})

// Exercise : 4
db.faculty.insertOne({
  department: "CS",
  teachers: [
    { name: "Dr. Rao", experience: 12 },
    { name: "Prof. Mehta", experience: 8 }
  ]
})

// Exercise : 5
db.students.insertOne({
  _id: ObjectId(),
  name: "David",
  department: "ME",
  semester: 4,
  mobile: "9000011111"
})

// Exercise : 6
db.test.insertOne({
  _id: 101,
  name: "First Record"
})

db.test.insertOne({
  _id: 101,
  name: "Duplicate Record"
})

// Exercise : 7
db.multiple.insert({
  item: "Pen",
  price: 10
})

db.multiple.insert({
  item: "Notebook",
  price: 50,
  brand: "Classmate"
})

db.multiple.insert({
  item: "Bag",
  price: 800,
  color: "Black"
})
