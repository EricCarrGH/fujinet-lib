Feature: IO library test - fn_io_close_directory

  This tests FN-IO fn_io_close_directory

  Scenario: execute fn_io_close_directory
    Given atari-fn-io simple test setup
      And I add common atari-io files
      And I add atari src file "fn_io/fn_io_close_directory.s"
      And I add file for compiling "features/atari/fn_io/stubs/bus-simple.s"
      And I create and load simple atari application
      And I write memory at $80 with $ff
     When I execute the procedure at _fn_io_close_directory for no more than 60 instructions

    # check the DCB values were set correctly
    Then I expect to see DDEVIC equal $70
     And I expect to see DUNIT equal $01
     And I expect to see DCOMND equal $f5
     And I expect to see DSTATS equal $00
     And I expect to see DBYTLO equal $00
     And I expect to see DBYTHI equal $00
     And I expect to see DTIMLO equal $0f
     And I expect to see DAUX1 equal $00
     And I expect to see DAUX2 equal $00
     And I expect to see DBUFLO equal $00
     And I expect to see DBUFHI equal $00

    # check BUS was called
    Then I expect to see $80 equal $01
