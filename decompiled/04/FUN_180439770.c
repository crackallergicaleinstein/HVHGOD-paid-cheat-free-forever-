// FUN_180439770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180439770 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_180439770(void)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  char *local_38;
  undefined8 local_30;
  
  if ((DAT_180cd49f0 & 1) == 0) {
    DAT_180cd49f0 = DAT_180cd49f0 | 1;
    auVar1 = ZEXT812(0);
    unique0x10000163 = 0;
    _DAT_180cd4a00 = auVar1;
    _DAT_180cd4a00 = _DAT_180cd4a00 << 0x20;
    _DAT_180cd4a10 = 0;
    _DAT_180cd4a14 = 0;
    DAT_180cd4a16 = 0;
    _DAT_180cd4a18 = 0;
    _DAT_180cd4a1c = ZEXT1232(auVar1) << 0x20;
    _DAT_180cd4a5c = 0;
    _DAT_180cd4a60 = 0;
    _DAT_180cd4aa8 = ZEXT1232(auVar1) << 0x20;
    _DAT_180cd4ae8 = 0;
    _DAT_180cd4af0 = 0;
    uRam0000000180cd4af8 = 0;
    uRam0000000180cd4b00 = 0;
    uRam0000000180cd4b08 = 0;
    _DAT_180cd4b10 = 0;
    uRam0000000180cd4b18 = 0;
    uRam0000000180cd4b20 = 0;
    uRam0000000180cd4b28 = 0;
    _DAT_180cd4b30 = 0;
    uRam0000000180cd4b38 = 0;
    uRam0000000180cd4b40 = 0;
    uRam0000000180cd4b48 = 0;
    _DAT_180cd4b50 = 0;
    uRam0000000180cd4b58 = 0;
    uRam0000000180cd4b60 = 0;
    uRam0000000180cd4b68 = 0;
    _DAT_180cd4b70 = 0;
    _DAT_180cd4b78 = 0;
    uVar5 = 0;
    _DAT_180cd4a3c = _DAT_180cd4a1c;
    _DAT_180cd4a68 = _DAT_180cd4a1c;
    _DAT_180cd4a88 = _DAT_180cd4a1c;
    _DAT_180cd4ac8 = _DAT_180cd4aa8;
    FUN_1803d24b0(&DAT_180cd4b80);
    _DAT_180cd4b90 = (undefined1  [16])0x0;
    _DAT_180cd4ba0 = 0;
    _DAT_180cd4ba8 = 7;
    _DAT_180cd4bb0 = 8;
    uVar4 = 0x3f800000;
    _DAT_180cd4b78 = 0x3f800000;
    FUN_1801406e0(&DAT_180cd4b90,0x10,DAT_180cd4b80);
    DAT_180cd4bb8 = 0;
    _DAT_180cd4bbc = 0x41400000;
    _DAT_180cd4bc0 = 0x3dcccccd40800000;
    uRam0000000180cd4bc8 = 0x4080000041000000;
    uRam0000000180cd4bd0 = 0x4100000040800000;
    uRam0000000180cd4bd8 = 0x4100000040800000;
    _DAT_180cd4be0 = 0x40c0000040800000;
    uRam0000000180cd4be8 = 0x4120000041200000;
    uRam0000000180cd4bf0 = 0x4100000041000000;
    uRam0000000180cd4bf8 = 0x4080000041000000;
    _DAT_180cd4c00 = 0x4180000000000000;
    uRam0000000180cd4c08 = 0x42a0000040e00000;
    uRam0000000180cd4c10 = 0x41a0000041b00000;
    uRam0000000180cd4c18 = 0x41d0000041b00000;
    _DAT_180cd4c20 = 0x41800000;
    _DAT_180cd4c24 = 0x41c00000;
    _DAT_180cd4c28 = 0xff101010;
    _DAT_180cd4c2c = 0xff2d2d2d;
    _DAT_180cd4c30 = 0xff171717;
    _DAT_180cd4c34 = 0xff2d2d2d;
    _DAT_180cd4c38 = 0xff3a3a3a;
    _DAT_180cd4c3c = 0;
    _DAT_180cd4c40 = 0xffeeeeee;
    _DAT_180cd4c44 = 0xff0a0a0a;
    _DAT_180cd4c48 = 0xff373737;
    _DAT_180cd4c4c = 0xffeeeeee;
    _DAT_180cd4c50 = 0xff171717;
    _DAT_180cd4c54 = 0xff2d2d2d;
    _DAT_180cd4c58 = 0xff222222;
    _DAT_180cd4c5c = 0xffeeeeee;
    _DAT_180cd4c60 = 0xff171717;
    _DAT_180cd4c64 = 0xff2d2d2d;
    _DAT_180cd4c68 = 0xffeeeeee;
    _DAT_180cd4c6c = 0xff121212;
    _DAT_180cd4c70 = 0xff2d2d2d;
    _DAT_180cd4c74 = 0xffa6a6a6;
    _DAT_180cd4c78 = 0xff202020;
    _DAT_180cd4c7c = 0xff101010;
    _DAT_180cd4c80 = 0xff2d2d2d;
    _DAT_180cd4c84 = 0xff202020;
    _DAT_180cd4c88 = 0x2aeeeeee;
    _DAT_180cd4c8c = 0xff101010;
    _DAT_180cd4c90 = 0xff2d2d2d;
    _DAT_180cd4c94 = 0xff171717;
    _DAT_180cd4c98 = 0xff2d2d2d;
    _DAT_180cd4c9c = 0xff101010;
    _DAT_180cd4ca0 = 0xff2d2d2d;
    _DAT_180cd4ca4 = 0xff121212;
    _DAT_180cd4ca8 = 0xff2d2d2d;
    _DAT_180cd4cac = 0xff2d2d2d;
    _DAT_180cd4cb0 = 0xffeeeeee;
    _DAT_180cd4cb4 = 0xffa6a6a6;
    _DAT_180cd4cb8 = 0xffeeeeee;
    FUN_18063ab10(&DAT_180cd4cc0,0,0x148);
    _DAT_180cd4e08 = 0;
    _DAT_180cd4e10 = 0;
    _DAT_180cd4e18 = 0;
    _DAT_180cd4e20 = 0;
    _DAT_180cd4e28 = 0;
    _DAT_180cd4e30 = 0;
    _DAT_180cd4e38 = 0;
    _DAT_180cd4e40 = 0;
    _DAT_180cd4e58 = 0;
    _DAT_180cd4e60 = 0xf;
    DAT_180cd4e48_1 = SUB1615((undefined1  [16])0x0,1);
    auVar2[0xf] = 0;
    auVar2._0_15_ = DAT_180cd4e48_1;
    _DAT_180cd4e48 = auVar2 << 8;
    _DAT_180cd4e68 = 0;
    DAT_180cd4e70 = 0;
    _DAT_180cd4e78 = 0;
    _DAT_180cd4e80 = 0;
    uRam0000000180cd4e88 = 0;
    _DAT_180cd4e90 = 0;
    uRam0000000180cd4e98 = 0;
    _DAT_180cd4ea0 = 0;
    _DAT_180cd4ea8 = 0;
    _DAT_180cd4eb0 = 0;
    uRam0000000180cd4eb8 = 0;
    _DAT_180cd4ec0 = 0;
    uRam0000000180cd4ec8 = 0;
    _DAT_180cd4ed0 = 0;
    _DAT_180cd4ed8 = 0;
    _DAT_180cd4ee0 = (undefined1  [16])0x0;
    _DAT_180cd4f00 = 0;
    uRam0000000180cd4f08 = 0xf;
    DAT_180cd4ef0_1 = SUB1615((undefined1  [16])0x0,1);
    auVar3[0xf] = 0;
    auVar3._0_15_ = DAT_180cd4ef0_1;
    _DAT_180cd4ef0 = auVar3 << 8;
    _DAT_180cd4e74 = uVar5;
    FUN_1803ce3b0(&DAT_180cd4f10);
    _DAT_180cd4f58 = 0;
    _DAT_180cd4f60 = 0;
    _DAT_180cd4f50 = uVar5;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_38 = "tier0.dll:g_pMemAlloc";
      local_30 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_38);
    }
    _DAT_180cd4f58 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x30)
    ;
    *(longlong *)_DAT_180cd4f58 = _DAT_180cd4f58;
    *(longlong *)(_DAT_180cd4f58 + 8) = _DAT_180cd4f58;
    _DAT_180cd4f68 = 0;
    _DAT_180cd4f70 = (undefined1  [16])0x0;
    _DAT_180cd4f80 = 7;
    _DAT_180cd4f88 = 8;
    _DAT_180cd4f50 = uVar4;
    FUN_1801406e0(&DAT_180cd4f68,0x10,_DAT_180cd4f58);
    _DAT_180cd4f98 = 0;
    _DAT_180cd4fa0 = 0;
    _DAT_180cd4f90 = uVar5;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_38 = "tier0.dll:g_pMemAlloc";
      local_30 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_38);
    }
    _DAT_180cd4f98 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20)
    ;
    *(longlong *)_DAT_180cd4f98 = _DAT_180cd4f98;
    *(longlong *)(_DAT_180cd4f98 + 8) = _DAT_180cd4f98;
    _DAT_180cd4fa8 = 0;
    _DAT_180cd4fb0 = (undefined1  [16])0x0;
    _DAT_180cd4fc0 = 7;
    _DAT_180cd4fc8 = 8;
    _DAT_180cd4f90 = uVar4;
    FUN_180440190(&DAT_180cd4fa8);
    _DAT_180cd4fd0 = (undefined1  [16])0x0;
    _DAT_180cd4fe0 = 0;
    atexit(FUN_180663190);
  }
  return &DAT_180cd4a00;
}



