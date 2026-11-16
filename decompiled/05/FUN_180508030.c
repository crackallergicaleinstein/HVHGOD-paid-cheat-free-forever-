// FUN_180508030 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180508030 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180508030(void)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  longlong *local_1e0;
  ulonglong local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined1 auStack_1ac [16];
  undefined8 uStack_19c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined1 local_164;
  undefined1 local_163 [235];
  char *local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  char *local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  char *local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_208;
  if (DAT_180bb8ae8 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(DAT_180bb8ae8 + 0xd0);
  }
  if (*plVar2 != 0) {
    FUN_180508390();
    local_1e8 = plVar2 + 5;
    iVar1 = (**(code **)(*(longlong *)*plVar2 + 0x60))((longlong *)*plVar2,&DAT_18085c2f0,0x36c,0);
    if (iVar1 == 0) {
      local_78 = "POSITION";
      local_1e0 = plVar2 + 6;
      local_58 = "TEXCOORD";
      local_70 = 0;
      local_38 = "COLOR";
      local_6c = 0x10;
      local_64 = 0;
      local_5c = 0;
      local_50 = 0;
      local_4c = 0x10;
      local_44 = 8;
      local_3c = 0;
      local_30 = 0;
      local_2c = 0x1c;
      local_24 = 0x10;
      local_1c = 0;
      local_1e8 = (longlong *)0x36c;
      iVar1 = (**(code **)(*(longlong *)*plVar2 + 0x58))
                        ((longlong *)*plVar2,&local_78,3,&DAT_18085c2f0);
      if (iVar1 == 0) {
        uStack_1b8 = 0;
        uStack_1b4 = 0;
        local_1c8 = 0x200000040;
        uStack_1c0 = 4;
        uStack_1bc = 0x10000;
        (**(code **)(*(longlong *)*plVar2 + 0x18))((longlong *)*plVar2,&local_1c8,0,plVar2 + 7);
        local_1e8 = plVar2 + 8;
        iVar1 = (**(code **)(*(longlong *)*plVar2 + 0x78))
                          ((longlong *)*plVar2,&DAT_18085c040,0x294,0);
        if (iVar1 == 0) {
          local_184 = 0;
          FUN_18063ab10(local_163,0,0xe3);
          local_188 = 0;
          local_180 = 1;
          local_17c = 5;
          local_178 = 0x100000006;
          uStack_170 = 0x600000002;
          local_168 = 1;
          local_164 = 0xf;
          (**(code **)(*(longlong *)*plVar2 + 0xa0))((longlong *)*plVar2,&local_188,plVar2 + 0xc);
          uStack_1c0 = 0;
          uStack_1bc = 0;
          uStack_1b8 = 0;
          uStack_1b4 = 0;
          auStack_1ac._0_12_ = ZEXT412(0);
          local_1c8 = 0x100000003;
          auStack_1ac._0_4_ = 1;
          uStack_1b0 = 1;
          (**(code **)(*(longlong *)*plVar2 + 0xb0))((longlong *)*plVar2,&local_1c8,plVar2 + 0xb);
          local_1c8 = 0x100000000;
          uStack_1c0 = 8;
          uStack_1bc = 0;
          uStack_1b0 = 1;
          uStack_1b4 = 1;
          auStack_1ac._8_8_ = &DAT_100000001;
          auStack_1ac._0_8_ = 0x800000001;
          uStack_19c = 0x800000001;
          uStack_1b8 = 0;
          (**(code **)(*(longlong *)*plVar2 + 0xa8))((longlong *)*plVar2,&local_1c8,plVar2 + 0xd);
          uStack_1b8 = 0;
          uStack_19c = 0;
          uStack_1b4 = 0;
          auStack_1ac = (undefined1  [16])0x0;
          local_1c8 = 0x300000015;
          uStack_1c0 = 3;
          uStack_1bc = 3;
          uStack_1b0 = 8;
          (**(code **)(*(longlong *)*plVar2 + 0xb8))((longlong *)*plVar2,&local_1c8,plVar2 + 9);
          local_1c8 = local_1c8 & 0xffffffff00000000;
          (**(code **)(*(longlong *)*plVar2 + 0xb8))((longlong *)*plVar2,&local_1c8,plVar2 + 10);
        }
      }
    }
  }
}



