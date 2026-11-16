// FUN_1803cfa70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803cfa70 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803cfa70(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 local_1968 [16];
  undefined1 local_1958 [16];
  undefined1 local_1948 [16];
  undefined1 local_1938 [16];
  undefined1 local_1928 [16];
  undefined1 local_1918 [16];
  undefined1 local_1908 [16];
  undefined1 local_18f8 [16];
  undefined1 local_18e8 [16];
  undefined1 local_18d8 [16];
  undefined8 local_18c8;
  undefined8 local_18c0;
  undefined4 local_18b8;
  undefined1 local_18b4;
  undefined4 local_18b0;
  undefined4 local_18ac;
  undefined8 local_18a8;
  undefined8 uStack_18a0;
  undefined8 uStack_1898;
  undefined8 uStack_1890;
  undefined4 local_1888;
  undefined4 local_1884;
  undefined4 local_1880;
  undefined1 local_1100 [4336];
  undefined8 uStack_10;
  
  uStack_10 = 0x1803cfa8d;
  FUN_1803cf970();
  FUN_18063ab10(local_1968,0,0x1960);
  uVar2 = FUN_1801be080(local_1968);
  FUN_1803cf3f0(param_1 + 0x21,uVar2);
  FUN_1801be220(local_1968);
  FUN_18063ab10(local_1968,0,0x16e8);
  FUN_1801bdf60(local_1968);
  FUN_1803cf230(param_1 + 0x34d,local_1968);
  FUN_1801c6980(local_1100);
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    *param_1 = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  local_1968 = (undefined1  [16])0x0;
  local_1958 = (undefined1  [16])0x0;
  local_1948 = (undefined1  [16])0x0;
  local_1938 = (undefined1  [16])0x0;
  local_1928 = (undefined1  [16])0x0;
  local_1918 = (undefined1  [16])0x0;
  local_1908 = (undefined1  [16])0x0;
  local_18f8 = (undefined1  [16])0x0;
  local_18e8 = (undefined1  [16])0x0;
  local_18d8 = (undefined1  [16])0x0;
  local_18c8 = 0;
  local_18c0 = 0;
  local_18b8 = 0;
  local_18b4 = 0;
  local_18b0 = 0x3f800000;
  local_18ac = 0;
  local_18a8 = 0;
  uStack_18a0 = 0x3f80000000000000;
  uStack_1898 = 0;
  uStack_1890 = 0x3f7851ec3f800000;
  local_1888 = 0x3f47ae14;
  local_1884 = 0x3f2b851f;
  local_1880 = 0x4099999a;
  FUN_1803cfc30(param_1 + 3,local_1968);
  FUN_180113710(local_18d8);
  FUN_180113710(local_18f8 + 8);
  FUN_1801c69f0(local_1908);
  FUN_1801c6ab0(local_1928 + 8);
  FUN_1801c6b70(local_1938);
  FUN_180176390(local_1958 + 8);
  FUN_1801c6c10(local_1968);
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



