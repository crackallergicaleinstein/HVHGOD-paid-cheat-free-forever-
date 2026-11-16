// FUN_18043ae90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043ae90 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18043ae90(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  puVar6 = (undefined8 *)FUN_180439710();
  plVar8 = (longlong *)puVar6[1];
  plVar9 = (longlong *)*puVar6;
  do {
    if (plVar9 == plVar8) {
      plVar8 = (longlong *)puVar6[1];
      for (plVar9 = (longlong *)*puVar6;
          ((plVar9 != plVar8 && (*plVar9 != 0)) && (*(char *)(*plVar9 + 0x21) == '\0'));
          plVar9 = plVar9 + 1) {
      }
      plVar7 = plVar9;
      if (plVar9 != plVar8) {
        while (plVar7 = plVar7 + 1, plVar7 != plVar8) {
          lVar1 = *plVar7;
          if ((lVar1 != 0) && (*(char *)(lVar1 + 0x21) == '\0')) {
            *plVar7 = 0;
            puVar5 = (undefined8 *)*plVar9;
            *plVar9 = lVar1;
            if (puVar5 != (undefined8 *)0x0) {
              (**(code **)*puVar5)(puVar5,1);
            }
            plVar9 = plVar9 + 1;
          }
        }
        if (plVar9 != plVar8) {
          plVar7 = (longlong *)puVar6[1];
          for (; plVar8 != plVar7; plVar8 = plVar8 + 1) {
            lVar1 = *plVar8;
            *plVar8 = 0;
            puVar5 = (undefined8 *)*plVar9;
            *plVar9 = lVar1;
            if (puVar5 != (undefined8 *)0x0) {
              (**(code **)*puVar5)(puVar5,1);
            }
            plVar9 = plVar9 + 1;
          }
          plVar8 = (longlong *)puVar6[1];
          for (plVar7 = plVar9; plVar7 != plVar8; plVar7 = plVar7 + 1) {
            puVar5 = (undefined8 *)*plVar7;
            if (puVar5 != (undefined8 *)0x0) {
              (**(code **)*puVar5)(puVar5,1);
            }
          }
          puVar6[1] = plVar9;
        }
      }
      FUN_1801ace10(puVar6 + 0xb,puVar6 + 3);
      FUN_1801acd50(puVar6 + 3);
      return;
    }
    lVar1 = *plVar9;
    if (((lVar1 != 0) && (*(char *)(lVar1 + 0x20) == '\0')) && (*(char *)(lVar1 + 0x21) == '\0')) {
      uVar2 = *(ulonglong *)(lVar1 + 8);
      plVar7 = (longlong *)
               ((((uVar2 >> 0x30 & 0xff ^
                  ((((((uVar2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar2 >> 8 & 0xff) *
                      0x100000001b3 ^ uVar2 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x18 & 0xff)
                    * 0x100000001b3 ^ uVar2 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x28 & 0xff)
                  * 0x100000001b3) * 0x100000001b3 ^ uVar2 >> 0x38) * 0x100000001b3 & puVar6[0x11])
                * 0x10 + puVar6[0xe]);
      lVar3 = plVar7[1];
      if (lVar3 != puVar6[0xc]) {
        uVar4 = *(ulonglong *)(lVar3 + 0x10);
        while (uVar2 != uVar4) {
          if (lVar3 == *plVar7) goto LAB_18043b047;
          lVar3 = *(longlong *)(lVar3 + 8);
          uVar4 = *(ulonglong *)(lVar3 + 0x10);
        }
        plVar7 = (longlong *)
                 ((((((((((uVar2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar2 >> 8 & 0xff) *
                         0x100000001b3 ^ uVar2 >> 0x10 & 0xff) * 0x100000001b3 ^
                       uVar2 >> 0x18 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x20 & 0xff) * 0x100000001b3
                     ^ uVar2 >> 0x28 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x30 & 0xff) * 0x100000001b3
                   ^ uVar2 >> 0x38) * 0x100000001b3 & puVar6[9]) * 0x10 + puVar6[6]);
        lVar3 = plVar7[1];
        if (lVar3 == puVar6[4]) {
LAB_18043b042:
          *(undefined1 *)(lVar1 + 0x20) = 1;
        }
        else {
          uVar4 = *(ulonglong *)(lVar3 + 0x10);
          while (uVar2 != uVar4) {
            if (lVar3 == *plVar7) goto LAB_18043b042;
            lVar3 = *(longlong *)(lVar3 + 8);
            uVar4 = *(ulonglong *)(lVar3 + 0x10);
          }
        }
      }
    }
LAB_18043b047:
    plVar9 = plVar9 + 1;
  } while( true );
}



