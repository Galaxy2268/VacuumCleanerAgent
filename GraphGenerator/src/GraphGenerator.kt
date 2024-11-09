import java.io.File
import kotlin.math.pow

object GraphGenerator {
    fun generateGraph(roomCount: Int) {
        val edges: MutableList<Pair<Int, Int>> = mutableListOf()
        val states: MutableMap<Pair<String, Int>, Int> = mutableMapOf()

        val stateCount = (2.0.pow(roomCount) * roomCount).toInt()
        val roomStateCount = stateCount / roomCount
        val edgeCount = (roomCount * 2.0.pow(roomCount - 1) * (2 * roomCount - 1)).toInt()
        var pos = 0


        for (i in 0..<roomStateCount) {
            for (j in 0..<roomCount){
                val state = Pair(Integer.toBinaryString((roomStateCount) - (i + 1)).padStart(roomCount, '0'), j)
                states[state] = pos
                pos++
            }
        }
        pos = 0



        for (i in 0..<roomStateCount) {
            val state = Integer.toBinaryString((roomStateCount) - (i + 1)).padStart(roomCount, '0')
            for(j in 0..<roomCount){
                if(state[j] == '1'){
                    val stateArray = state.toCharArray()
                    stateArray[j] = '0'
                    val edge = Pair(pos, states[Pair(String(stateArray), j)]!!)
                    edges.addLast(edge)
                }
                for(k in 0..<roomCount){
                    if(j == k) continue
                    val edge = Pair(pos, states[Pair(state, k)]!!)
                    edges.addLast(edge)
                }
                pos++
            }
        }



        File("D:\\VacumCleanerAgent\\Data\\test.txt").printWriter().use { out ->
            out.print(stateCount)
            out.println(" $edgeCount \n")
            for(i in edges){
                out.println("${i.first} ${i.second}")
            }
        }

    }
}