void main(List<String> arguments) {
  print("Hello Adarsha");
  print("Welcomre to the Dart");
  String s = "Academy of Technolgy";
  print(s.contains("og"));
  int a = 5;
  print(a);
  print(a.toString());
  print(a.isOdd);
  num b = 5.05;
  print(b);
  dynamic n = 10;
  print(n);
  n = "adarsha";
  print(n);
  n = true;
  print(n);
  n = 20.5;
  print(n);

// Using Var
  var ad = 90;
  print(ad);
  //ad = "AD";
  //In var updation of same datatype is possible but changing the datatype is not possible;
  // If you use final then updation of the variable is not possible;
  //and it is nessary to intialize the variable at the beginning in final
  final k = 8;
  String? possible = null;
  print(possible?.length);

  //Positional parameter
  void positional(int x, double y, String st) {
    print(x);
    print(y);
    print(st);
  }

// Optiaonal Positional Paramter(Use curly Brackets)
  void optional_positional(int x, double y, {String st = "Adarsha"}) {
    print(x);
    print(y);
    print(st);
  }

//Named optional
  void named_optioal({int? x, double? y, String st = "Adarsha"}) {
    print(x);
    print(y);
    print(st);
  }
//Named required parameter

  void named_required(
    int a, {
    required int x,
    required double y,
    required String st,
  }) {
    print(a);
    print(x);
    print(y);
    print(st);
  }

  //calling the upper functions
  positional(5, 3.5, "ad");
  optional_positional(5, 3.5);
  named_optioal(x: 5, y: 3.5);
  named_required(10, x: 5, y: 3.5, st: "ad");

  /* int sum(int x) {
    return x + 5;
  }

  int Function(int) add(int Function(int) f) {
    return (int x) {
      return f(f(x));
    };
  }

  //add(sum(3));
  */

//List Implementation
  List<int> li = [1, 2, 3, 4];
  print(li[2]);

//Map
  Map<String, dynamic> map = {
    "name": 'Adarsha',
    "age": '20+',
  };

  print(map['name']);
//Set
  Set<int> myset = {1, 2, 3, 2, 4, 3, 5};
  print(myset.length);
  print(myset);
// Converting Iterable to list,in itrable we can't access using index no,
// thats why we convert to it in a list
  final names = ['adsha', 'parha', 'rupam'];
  final l = names.map((name) => name.length).toList();
  print(l[0]);
// For filtering the name
  final filtered = names.where((name) => name.length == 5).toList();
  print(filtered);
  //print using loop
  for (int i = 0; i < filtered.length; i++) {
    print(filtered[i]);
  }
  //another way to print for loop
  for (final name in filtered) {
    print(name);
  }
  //Another way
  filtered.forEach((print));

//for loop in list

  final x = <String>[
    for (int i = 0; i < 5; i++) i.toString(),
  ];
  print(x);

  //Add to list
  final list1 = ['Lets', 'Do'];
  final list2 = ['it', 'Mann!!'];
  List<String> kk = <String>[
    ...list1,
    ...list2,
  ];
  print(kk);
}
