// FUN_180294360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180294360 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180294360(undefined8 *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 (*pauVar9) [16];
  undefined8 uVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*local_48) [16];
  undefined8 local_40;
  undefined1 local_38 [16];
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_48 = (undefined1 (*) [16])0x180827288;
    local_40 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_48);
  }
  local_48 = (undefined1 (*) [16])
             (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x28);
  if (local_48 == (undefined1 (*) [16])0x0) {
    pauVar12 = (undefined1 (*) [16])0x0;
  }
  else {
    *local_48 = (undefined1  [16])0x0;
    *(undefined4 *)(*local_48 + 8) = 1;
    *(undefined4 *)(*local_48 + 0xc) = 1;
    *(undefined ***)*local_48 =
         std::
         _Ref_count_obj2<std::vector<features::esp::player::chams::onshot::entry,std::allocator<features::esp::player::chams::onshot::entry>_>_>
         ::vftable;
    *(undefined8 *)local_48[1] = 0;
    *(undefined8 *)(local_48[1] + 8) = 0;
    *(undefined8 *)local_48[2] = 0;
    pauVar12 = local_48;
  }
  pauVar1 = pauVar12 + 1;
  local_38._8_8_ = pauVar12;
  local_38._0_8_ = pauVar1;
  uVar3 = param_1[0x10];
  lVar4 = *(longlong *)*pauVar1;
  if ((ulonglong)((*(longlong *)pauVar12[2] - lVar4) / 0x1088) < uVar3) {
    if (0xf7c5ed9c4f5d6 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    lVar5 = *(longlong *)(pauVar12[1] + 8);
    pauVar9 = (undefined1 (*) [16])FUN_18015bca0(uVar3 * 0x1088);
    lVar6 = *(longlong *)(pauVar12[1] + 8);
    lVar11 = *(longlong *)*pauVar1;
    local_48 = pauVar9;
    if (lVar11 != lVar6) {
      do {
        FUN_18029ab40(pauVar9,lVar11);
        pauVar9 = (undefined1 (*) [16])(pauVar9[0x108] + 8);
        lVar11 = lVar11 + 0x1088;
      } while (lVar11 != lVar6);
    }
    FUN_18029a570(pauVar1,local_48,(lVar5 - lVar4) / 0x1088,uVar3);
  }
  puVar7 = (undefined8 *)param_1[0xf];
  for (puVar8 = (undefined8 *)*puVar7; puVar8 != puVar7; puVar8 = (undefined8 *)*puVar8) {
    if (*(longlong *)(pauVar12[1] + 8) == *(longlong *)pauVar12[2]) {
      FUN_18029a2b0(pauVar1,*(longlong *)(pauVar12[1] + 8),puVar8 + 3);
    }
    else {
      FUN_18029a820();
      *(longlong *)(pauVar12[1] + 8) = *(longlong *)(pauVar12[1] + 8) + 0x1088;
    }
  }
  uVar10 = FUN_180113860(param_1 + 1);
  local_48 = (undefined1 (*) [16])*param_1;
  *param_1 = pauVar1;
  LOCK();
  uVar2 = param_1[1];
  param_1[1] = pauVar12;
  UNLOCK();
  if (((byte)uVar2 & 3) == 2) {
    FUN_1805fa36c(param_1 + 1);
  }
  local_40 = uVar10;
  FUN_1800efed0(&local_48);
  return;
}



