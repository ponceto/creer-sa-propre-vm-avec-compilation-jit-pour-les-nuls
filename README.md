# CREER SA PROPRE VM AVEC COMPILATION JIT POUR LES NULS

## ABSTRACT

La compilation « Just In Time » est une technique d'exécution très utilisée depuis de nombreuses années au sein des machines virtuelles de langages tels que Java, C#, JavaScript, etc .... Elle permet d'interpréter et d'exécuter un byte-code tout en le transformant « à la volée » vers le langage machine natif de la machine hôte nous permettant ainsi d'obtenir des performances bien plus élevées lors d'une seconde exécution du code.

Ces techniques de recompilation dynamique peuvent être complexes à appréhender lorsque l'on est néophyte sur le sujet, c'est pourquoi nous allons démystifier ensemble ce sujet.

Dans ce talk nous mettrons en œuvre et en live notre propre machine virtuelle avec JIT intégrée pour une calculatrice RPN (Reverse Polish Notation), sans aucun framework ni infrastructure de compilation extérieure, en émettant nous même le code machine x86_64 nécessaire à l'exécution.

Puisse le dieu des « segmentation fault (core dumped) » être avec nous !

## RÉFÉRENCES

  - Mon talk « Ressuscitons les Ordinosaures » traitant de l'écriture d'émulateurs d'ordinateur et consoles (donné au Camping des Speakers 2022, en keynote à SnowCamp 2023, en meetup à Software Crafters Rennes, à Devoxx 2023, ...).

Suite à ce talk, il s'est révélé que ce sujet intéresse beaucoup de monde et plus largement les techniques d'écriture de VM avec recompilation dynamique de code.

Je vous propose donc ce sujet montrant coder une vm avec jit (simple) avec un peu de live code.
