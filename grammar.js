/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "abaqus",
  
  extras: $ => [
    $.comment,
    $._blank,
    /[\t ]/
  ],
  rules: {
    source_file: $ => repeat($.block),

    block: $ => choice(
      $.cards,
      prec.left(repeat1($.values)),

      // $.function_definition
      // TODO: other kinds of definitions
    ),

    cards: $ => seq(
      '*',
      $.card_name 
    ),
    
    card_name: (_) => /[^\n]*/,
    
    values: $ => seq(
      $.number,
      optional(/[ ]*,[ ]*/),
      repeat1(
        seq($.number_float, optional(/[ ]*,[ ]*/))
      ),
    ),

    // function_definition: $ => seq(
      // '*',
      // $.identifier,
      // $.parameter_list,
      // $._type,
      // $.block
    // ),

    comment: $ => seq('**', optional(/[ ]*/), alias(/[^\r\n]*/, $.text), /\r?\n/),
 _blank: () => field('blank', /\r?\n/), 

 
    // parameter_list: $ => seq(
    //   '(',
    //    // TODO: parameters
    //   ')'
    // ),
    //
    // _type: $ => choice(
    //   'bool'
    //   // TODO: other kinds of types
    // ),
    //
    // block: $ => seq(
    //   '{',
    //   repeat($._statement),
    //   '}'
    // ),
    //
    // _statement: $ => choice(
    //   $.return_statement
    //   // TODO: other kinds of statements
    // ),
    //
    // return_statement: $ => seq(
    //   'return',
    //   $._expression,
    //   ';'
    // ),
    //
    // _expression: $ => choice(
    //   $.identifier,
    //   $.number,
    //   $.number_float
    // //   // TODO: other kinds of expressions
    //  ),
    // //
    // identifier: $ => /[a-z]+/,
    //
    number: $ => /\d+/,

    number_float: $ => /[+-]?([0-9]+([.][0-9]*)?|[.][0-9]+)/,
    string: $ => /"[^"]*"/,
    word: $ => /[a-zA-Z0-9_]+/,
  }


});
