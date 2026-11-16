// FUN_180334100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180334100 */

void FUN_180334100(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 local_528;
  ulonglong *puStack_520;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  ulonglong *puStack_440;
  undefined1 local_438 [16];
  undefined8 local_428;
  undefined8 uStack_420;
  ulonglong local_418 [69];
  longlong alStack_1f0 [57];
  
  local_528 = in_stack_00000158;
  local_448 = in_stack_00000160;
  local_458 = in_stack_00000168;
  local_460 = in_stack_00000170;
  local_468 = in_stack_00000178;
  local_470 = in_stack_00000180;
  local_478 = in_stack_00000188;
  local_480 = in_stack_00000190;
  local_488 = in_stack_00000198;
  local_490 = in_stack_000001a0;
  local_498 = in_stack_000001a8;
  local_4a0 = in_stack_000001b0;
  local_4a8 = in_stack_000001b8;
  local_4b0 = in_stack_000001c0;
  local_4b8 = in_stack_000001c8;
  local_4c0 = in_stack_000001d0;
  local_4c8 = in_stack_000001d8;
  local_4d0 = in_stack_000001e0;
  local_4d8 = in_stack_000001e8;
  local_4e0 = in_stack_000001f0;
  local_4e8 = in_stack_000001f8;
  local_4f0 = in_stack_00000200;
  local_4f8 = in_stack_00000208;
  local_500 = in_stack_00000210;
  if (DAT_180bbeabc != '\0') {
    FUN_180334ce0();
    local_528 = 0x44;
    puStack_520 = local_418;
    local_428 = 0;
    uStack_420 = 0xf;
    local_438._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar1[0xf] = 0;
    auVar1._0_15_ = local_438._1_15_;
    local_438 = auVar1 << 8;
    uVar2 = 0;
    uVar5 = 0;
    do {
      bVar3 = (byte)(local_418[uVar5] >> 0x3c);
      if (bVar3 == 0xc) {
        uVar2 = uVar2 + *(longlong *)
                         ((longlong)alStack_1f0 + (local_418[uVar5] & 0xfffffffffffffff));
      }
      else if (bVar3 == 0xb) {
        uVar2 = uVar2 + 0x20;
      }
      else {
        uVar2 = uVar2 + 8;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x44);
    lVar4 = param_1[1] + uVar2;
    if (CARRY8(param_1[1],uVar2)) {
      lVar4 = -1;
    }
    FUN_1800f5540(local_438,lVar4,uVar5,0xfffffffffffffff,in_stack_00000028,in_stack_00000030,
                  in_stack_00000038,in_stack_00000040,in_stack_00000048,in_stack_00000050,
                  in_stack_00000058,in_stack_00000060,in_stack_00000068,in_stack_00000070,
                  in_stack_00000078,in_stack_00000080,in_stack_00000088,in_stack_00000090,
                  in_stack_00000098,in_stack_000000a0,in_stack_000000a8,in_stack_000000b0,
                  in_stack_000000b8,in_stack_000000c0,in_stack_000000c8,in_stack_000000d0,
                  in_stack_000000d8,in_stack_000000e0,in_stack_000000e8,in_stack_000000f0,
                  in_stack_000000f8,in_stack_00000100,in_stack_00000108,in_stack_00000110,
                  in_stack_00000118,in_stack_00000120,in_stack_00000128,in_stack_00000130,
                  in_stack_00000138,in_stack_00000140,in_stack_00000148,in_stack_00000150,
                  in_stack_00000158,in_stack_00000160,in_stack_00000168,in_stack_00000170,
                  in_stack_00000178,in_stack_00000180,in_stack_00000188,in_stack_00000190,
                  in_stack_00000198,in_stack_000001a0,in_stack_000001a8,in_stack_000001b0,
                  in_stack_000001b8,in_stack_000001c0,in_stack_000001c8,in_stack_000001d0,
                  in_stack_000001d8,in_stack_000001e0,in_stack_000001e8,in_stack_000001f0,
                  in_stack_000001f8,in_stack_00000200,in_stack_00000208,in_stack_00000210);
    local_448 = local_528;
    puStack_440 = puStack_520;
    local_458 = *param_1;
    uStack_450 = param_1[1];
    FUN_1801da050(&local_528,local_438,&local_458,&local_448,0);
    FUN_18030e280(local_438);
    FUN_18015c010(local_438);
  }
  return;
}



