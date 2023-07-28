# sintax_analyzer-with-flex-bison-

//compile
bison -d analyzer.y
flex tokenyzer.l
cc analyzer.tab.c lex.yy.c -lfl
/*
  code from:
      lex & bison
      by John R. Levine
      Copyright © 2009 John Levine. All rights reserved.
      Printed in the United States of America.
      Published by O’Reilly Media, Inc., 1005 Gravenstein Highway North, Sebastopol, CA 95472.
      O’Reilly books may be purchased for educational, business, or sales promotional use. Online editions
      are also available for most titles (http://my.safaribooksonline.com). For more information, contact our
      corporate/institutional sales department: (800) 998-9938 or corporate@oreilly.com.
      Editor: Simon St.Laurent
      Production Editor: Adam Witwer
      Copyeditor: Kim Wimpsett
      Proofreader: Teresa Berensfeld
      Production Services: Molly Sharp
      Indexer: Fred Brown
      Cover Designer: Karen Montgomery
      Interior Designer: David Futato
      Illustrator: Robert Romano
      Printing History:
      August 2009: First Edition.
*/
