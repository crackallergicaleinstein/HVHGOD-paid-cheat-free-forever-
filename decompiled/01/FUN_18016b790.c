// FUN_18016b790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18016b790 */

undefined8 FUN_18016b790(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  size_t sVar3;
  size_t _Size;
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar9;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38 [32];
  
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  puVar9 = *(undefined8 **)(param_1 + 0x28);
  local_40 = param_2;
  if (puVar9 != puVar1) {
    uVar2 = param_3[3];
    sVar3 = param_3[2];
    do {
      _Buf2 = param_3;
      if (0xf < uVar2) {
        _Buf2 = (undefined8 *)*param_3;
      }
      _Size = puVar9[2];
      _Buf1 = puVar9;
      if (0xf < (ulonglong)puVar9[3]) {
        _Buf1 = (undefined8 *)*puVar9;
      }
      if (_Size == sVar3) {
        if (_Size == 0) break;
        iVar7 = memcmp(_Buf1,_Buf2,_Size);
        if (iVar7 == 0) break;
      }
      puVar9 = puVar9 + 0x2d;
    } while (puVar9 != puVar1);
    if (puVar9 != puVar1) {
      puVar8 = (undefined1 *)FUN_18015b360(local_38,puVar9 + 0x18);
      bVar6 = false;
      bVar5 = true;
      goto LAB_18016b851;
    }
  }
  local_50 = 0;
  uStack_48 = 0xf;
  local_60._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar4[0xf] = 0;
  auVar4._0_15_ = local_60._1_15_;
  local_60 = auVar4 << 8;
  puVar8 = local_60;
  bVar6 = true;
  bVar5 = false;
LAB_18016b851:
  FUN_18015b360(param_2,puVar8);
  if (bVar5) {
    FUN_18015c010(local_38);
  }
  if (bVar6) {
    FUN_18015c010(local_60);
  }
  return param_2;
}



